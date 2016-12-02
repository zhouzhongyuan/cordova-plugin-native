/* 
* @Author: zjy
* @Date:   2016-11-07 09:01:43
* @Last Modified by:   zjy
* @Last Modified time: 2016-12-01 11:22:42
*/
package com.cordova.nativeapp;
  
import org.json.JSONArray;
import android.content.Intent;
import org.apache.cordova.CordovaPlugin;
import org.apache.cordova.CallbackContext;

public class NativeApp extends CordovaPlugin{
    private CallbackContext callbackContext;
    private static final String OPEN_INTENT = "com.native.HomeActivity";

    public NativeApp(){
    }
    
    @Override  
    public boolean execute(String action, JSONArray args, CallbackContext callbackContext){  
        this.callbackContext = callbackContext;
        openApp(); 
        return true;
    }

    public void openApp() {
        Intent intent = new Intent(OPEN_INTENT);
        intent.addCategory(Intent.CATEGORY_DEFAULT);
        intent.setPackage(cordova.getActivity().getApplicationContext().getPackageName());
        cordova.startActivityForResult((CordovaPlugin) this, intent, 200);    
    }

    @Override  
    public void onActivityResult(int requestCode, int resultCode, Intent intent) {  
        if(requestCode == 200){
            this.callbackContext.success("successed");
        }else{
            this.callbackContext.error("failed");
        }
    } 
}