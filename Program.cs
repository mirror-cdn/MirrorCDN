using Microsoft.AspNetCore.Components;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using MirrorCDN;
using System.Web;
using System.Text;

using Vive.Crypto;
using Vive.Crypto.Hash;
using Vive.Crypto.Core;
using Vive.Crypto.Abstractions;

using Blazored;
using Blazored.LocalStorage.StorageOptions;
using Blazored.LocalStorage;
using Blazored.SessionStorage.StorageOptions;
using Blazored.SessionStorage;
using Blazored.LocalStorage.Serialization;
using Blazored.SessionStorage.Serialization;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });
builder.Services.AddBootstrapBlazor();
builder.Services.AddBlazoredLocalStorage();
builder.Services.AddBlazoredSessionStorage();
await builder.Build().RunAsync();

public static class Ext
{
    public static string QueryString(this NavigationManager nav, string paramName)
    {
        var uri = nav.ToAbsoluteUri(nav.Uri);
        string? paramValue = HttpUtility.ParseQueryString(uri.Query).Get(paramName);
        return paramValue ?? "";
    }
    public static string DeBase64(string txt)
    {
        return Base64ConvertProvider.Decode(txt, Encoding.UTF8);
    }
    public static string EnBase64(string txt)
    {
        return Base64ConvertProvider.Encode(txt, Encoding.UTF8);
    }
    public static RSAKey RSACreateKey()
    {
        return RSAEncryptionProvider.CreateKey(RSAKeySizeType.L1024, RSAKeyType.Base64);
    }
    public static string RSAEncrypt(string txt, RSAKey key)
    {
        return RSAEncryptionProvider.Encrypt(txt, key.PublickKey, Encoding.UTF8, OutType.Base64, RSAKeyType.Base64);
    }
    public static string RSADecrypt(string txt, RSAKey key)
    {
        return RSAEncryptionProvider.Decrypt(txt, key.PrivateKey, Encoding.UTF8, OutType.Base64, RSAKeyType.Base64);
    }
    public static string RSASign(string txt, RSAKey key)
    {
        return RSAEncryptionProvider.SignData(txt, key.PrivateKey, Encoding.UTF8, OutType.Base64, RSAType.RSA2, RSAKeyType.Base64);
    }
    public static bool RSAVerify(string txt, string txtsign, RSAKey key)
    {
        return RSAEncryptionProvider.VerifyData(txt, txtsign, key.PublickKey, Encoding.UTF8, OutType.Base64, RSAType.RSA2, RSAKeyType.Base64);
    }
    /// <summary>
    /// �������ַ�����GZip�㷨ѹ���󣬷���Base64�����ַ�
    /// </summary>
    /// <param name="rawString">��Ҫѹ�����ַ���</param>
    /// <returns>ѹ�����Base64������ַ���</returns>
    public static string StringToGZip(string rawString)
    {
        if (string.IsNullOrEmpty(rawString) || rawString.Length == 0)
        {
            return "";
        }
        else
        {
            byte[] rawData = System.Text.Encoding.UTF8.GetBytes(rawString.ToString());
            byte[] zippedData = Compress(rawData);
            return (string)(Convert.ToBase64String(zippedData));
        }
    }

    /// <summary>
    /// GZipѹ��
    /// </summary>
    /// <param name="rawData"></param>
    /// <returns></returns>
    private static byte[] Compress(byte[] rawData)
    {
        System.IO.MemoryStream ms = new System.IO.MemoryStream();
        System.IO.Compression.GZipStream compressedzipStream = new System.IO.Compression.GZipStream(ms, System.IO.Compression.CompressionMode.Compress, true);
        compressedzipStream.Write(rawData, 0, rawData.Length);
        compressedzipStream.Close();
        return ms.ToArray();
    }

    /// <summary>
    /// ��ѹSring 
    /// </summary>
    /// <param name="Value"></param>
    /// <returns></returns>
    public static string GzipToString(string Value)
    {
        //DataSet ds = new DataSet();
        string CC = GZipDecompressString(Value);
        //System.IO.StringReader Sr = new System.IO.StringReader(CC);
        //ds.ReadXml(Sr);
        return CC;
    }
    /// <summary>
    /// ������Ķ������ַ���������GZip�㷨��ѹ��
    /// </summary>
    /// <param name="zippedString">��GZipѹ����Ķ������ַ���</param>
    /// <returns>ԭʼδѹ���ַ���</returns>
    private static string GZipDecompressString(string zippedString)
    {
        if (string.IsNullOrEmpty(zippedString) || zippedString.Length == 0)
        {
            return "";
        }
        else
        {
            byte[] zippedData = Convert.FromBase64String(zippedString.ToString());
            return (string)(System.Text.Encoding.UTF8.GetString(Decompress(zippedData)));
        }
    }
    /// <summary>
    /// ZIP��ѹ
    /// </summary>
    /// <param name="zippedData"></param>
    /// <returns></returns>
    private static byte[] Decompress(byte[] zippedData)
    {
        System.IO.MemoryStream ms = new System.IO.MemoryStream(zippedData);
        System.IO.Compression.GZipStream compressedzipStream = new System.IO.Compression.GZipStream(ms, System.IO.Compression.CompressionMode.Decompress);
        System.IO.MemoryStream outBuffer = new System.IO.MemoryStream();
        byte[] block = new byte[1024];
        while (true)
        {
            int bytesRead = compressedzipStream.Read(block, 0, block.Length);
            if (bytesRead <= 0)
                break;
            else
                outBuffer.Write(block, 0, bytesRead);
        }
        compressedzipStream.Close();
        return outBuffer.ToArray();

    }

    public static void SetCookice()
    {
      

    }

} 