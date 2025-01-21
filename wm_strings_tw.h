/**
 * wm_strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "en-US"; // i18n lang code

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='zh-TW'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>設置WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>設置WiFi（不掃描）</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>資訊</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>設定</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>關閉</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>重新啟動</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>離開</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>清除</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>更新</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>儲存</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>重新整理</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>儲存連線密碼<br/>嘗試連接ESP到網路。<br />如果失敗，請試試重新連線到AP。</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>已儲存<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>清除WiFi設置</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>更新</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>返回</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>連線到</strong>{v}<br/><em><small>IP位址：{i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>連不上</strong>{v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>驗證失敗"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>找不到AP";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>連不上"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>尚未設定AP</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:\"微軟正黑體\",\"黑體-繁\",sans-serif}div,input{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box;}"
"input,button,.msg{border-radius:.3rem;width: 100%},input[type=radio]{width: auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button.D{background-color:#dc3630}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
"input:disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>可用的網頁</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>頁面</th><th>功能</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>選單頁面</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>顯示WiFi掃描結果並且進入WiFi設置畫面（/0不掃描wifi）</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>儲存WiFi設置資訊並且設置裝置。需要提供變數。</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>參數頁面</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>資訊頁面</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>OTA更新</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>關閉網頁驗證入口（Captive Portal）視窗，設置入口（Config Portal）仍保持運作。</td></tr>"
 "<tr><td>/exit</td>"
 "<td>離開設置入口（Config Portal），「設置入口」將被關閉。</td></tr>"
 "<tr><td>/restart</td>"
 "<td>重新啟動裝置</td></tr>"
 "<tr><td>/erase</td>"
 "<td>清除WiFi設置並且重新啟動裝置。裝置將不會重新連到網路，直到有新的WiFi設置資料輸入。</td></tr>"
 "</table>"
 "<p/>更多關於WiFiManager的資訊，請參閱<a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "上傳新韌體<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>更新</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* 可能無法在網頁驗證入口中運作，請開啟新瀏覽視窗，瀏覽到http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>更新失敗</strong><Br/>請重新啟動裝置再試一次</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>更新成功。</strong> <br/> 裝置重新啟動中…</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
// Info html
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>晶片版本</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>上次重置原因</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>無線基地台主機名稱</dt><dd>{1}</dd>";  
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM大小</dt><dd>{1} 位元組</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>溫度</dt><dd>{1} C&deg; / {2} F&deg;</dd><dt>霍爾</dt><dd>{3}</dd>";    
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>快閃晶片ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>核心版本</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot版本</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>上次重置原因</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>真實快閃記憶體大小</dt><dd>{1} 位元組</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>記憶體 - 程式碼大小</dt><dd>已使用 / 總位元組<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>記憶體 - 可用堆積（heap）</dt><dd>{1} 位元組</dd>"; 
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>運作時間</dt><dd>{1} 分 {2} 秒</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>晶片ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>快閃記憶體大小</dt><dd>{1} 位元組</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK 版本</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU頻率</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>無線基地台（AP）IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>無線基地台（AP）MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>基站（STA）SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>基站（STA）IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>基站閘道器</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>基站子網路</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS伺服器</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>主機名稱</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>基站MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>已連線</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>自動連線</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Build date</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "WiFiManager";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "是";
const char S_n[]                  PROGMEM = "否";
const char S_enable[]             PROGMEM = "已啟用";
const char S_disable[]            PROGMEM = "已停用";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "未知";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "已儲存連線密碼";
const char S_titlewifisettings[]  PROGMEM = "設置已存檔";
const char S_titlewifi[]          PROGMEM = "設置ESP";
const char S_titleinfo[]          PROGMEM = "資訊";
const char S_titleparam[]         PROGMEM = "設置";
const char S_titleparamsaved[]    PROGMEM = "設置已存";
const char S_titleexit[]          PROGMEM = "離開";
const char S_titlereset[]         PROGMEM = "重置";
const char S_titleerase[]         PROGMEM = "清除";
const char S_titleclose[]         PROGMEM = "關閉";
const char S_options[]            PROGMEM = "選項";
const char S_nonetworks[]         PROGMEM = "找不到網路。重新整理網頁可再次掃描。";
const char S_staticip[]           PROGMEM = "靜態IP";
const char S_staticgw[]           PROGMEM = "靜態閘道器";
const char S_staticdns[]          PROGMEM = "靜態DNS";
const char S_subnet[]             PROGMEM = "子網路";
const char S_exiting[]            PROGMEM = "離開中";
const char S_resetting[]          PROGMEM = "模組將在數秒鐘後重置。";
const char S_closing[]            PROGMEM = "你可以關閉此頁，網站將繼續運作。";
const char S_error[]              PROGMEM = "發生錯誤了";
const char S_notfound[]           PROGMEM = "找不到檔案\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\n方法：";
const char S_args[]               PROGMEM = "\n參數：";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";


// softap ssid default prefix
#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
