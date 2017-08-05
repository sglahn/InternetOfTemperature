//
// Do not edit this file, generated code.
//

const char HTTP_HEAD[] PROGMEM = "<!DOCTYPE html><html><head lang='en'><title>ESP8266 Configuration Interface</title>";
const char HTTP_SCRIPT[] PROGMEM = "<script>function restart(){var request = new XMLHttpRequest();request.open('GET','restart');request.send('');}function sendData(){var form = document.form;var request = new XMLHttpRequest();var params = encodeURI(form.ssid.name+'='+form.ssid.value+'&'+form.password.name+'='+form.password.value+'&'+form.identifier.name+'='+form.identifier.value+'&'+form.sleepInterval.name+'='+form.sleepInterval.value+'&'+form.thingspeakKey.name+'='+form.thingspeakKey.value+'&'+form.otaUrl.name+'='+form.otaUrl.value);request.open('GET','set_config'+'?'+params);request.send('');}function showPassword(){var field = document.getElementById('password');var button = document.getElementById('pwd');if(field.type == 'password'){field.type = 'text';button.value = '***';}else{field.type = 'password';button.value = 'abc';};}</script>";
const char HTTP_STYLE[] PROGMEM = "<style>#form-div{background-color:rgba(72,72,72,0.4);padding-left:35px;padding-right:35px;padding-top:35px;padding-bottom:50px;width:450px;float:left;left:50%;position:absolute;margin-top:30px;margin-left:-260px;}.data-input{color:#3c3c3c;background-color:#fbfbfb;padding:13px 13px 13px 24px;font-size:24px;width:100%;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;-ms-box-sizing:border-box;box-sizing:border-box;border:3px solid rgba(0,0,0,0);}.button-blue,#pwd{float:left;width:100%;border:#fbfbfb solid 4px;cursor:pointer;background-color:#3498db;color:white;font-size:24px;padding-top:16px;padding-bottom:16px;margin-top:-4px;font-weight:700;}.button-blue:hover,#pwd:hover{background-color:rgba(0,0,0,0);color:#0493bd;}</style></head>";
const char HTTP_BODY[] PROGMEM = "<body><iframe name='hidden_frame' style='display:none'></iframe><div id='form-div'><form name='form' action='/set_config' method='get' target='hidden_frame'><p><input type='text' name='ssid' class='data-input' placeHolder='SSID' maxlength='32' required value='{{ssid}}'/></p><p><div class='submit'><input type='password' id='password' name='password' class='data-input' maxlength='32' placeHolder='Password' value='{{password}}' style='width:75%'/><input type='button' class='pwd-button' id='pwd' onClick='showPassword();' title='Show/hide password' value='abc' style='width:20%;float:right'/></div><p><input type='text' name='identifier' class='data-input' maxlength='32' placeHolder='Identifier' required value='{{identifier}}'/></p><p><input type='number' name='sleepInterval' class='data-input' placeHolder='Sleep Interval' required max='9999' value='{{sleepInterval}}'/></p><p><input type='text' name='thingspeakKey' class='data-input' maxlength='16' placeHolder='Thingspeak API Key' value='{{thingspeakApiKey}}'/></p><p><input type='text' name='otaUrl' class='data-input' placeHolder='OTA URL' maxlength='32' value='{{otaUrl}}'/></p><div class='submit'><input type='button' value='Update' onClick='sendData();' class='button-blue'><input type='button' value='Restart ESP8266' onClick='restart();' class='button-blue'></div></form></div>";
const char HTTP_FOOT[] PROGMEM = "</body></html>";
