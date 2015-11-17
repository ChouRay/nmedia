package com.example.zl.myfirstndk;

/**
 * Created by Administrator on 2015/10/6.
 */
public class NdkJniUtils {

    static {
        System.loadLibrary("MyJniLib");
    }
    public native String getCLanguageString();
    public native String f(int i, String s);
}
