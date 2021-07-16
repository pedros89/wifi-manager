const char INDEX_HTML[] PROGMEM = R"rawliteral(               
<!DOCTYPE HTML>
<html>
 <head>
  <meta content="text/html; charset=ISO-8859-1" http-equiv="content-type">
  <meta name = "viewport" content = "width = device-width, initial-scale = 1.0, maximum-scale = 1.0, user-scalable=0">
  <title>WiFi Creds Form</title>
  <style>
   body { background-color: #808080; font-family: Arial, Helvetica, Sans-Serif; Color: #000000; text-align:center; }
  </style>
 </head>
 <body>
  <h3>Enter your WiFi credentials</h3>
  <form action="/" method="post">
  <p>
   <label>SSID:&nbsp;</label>
   <input maxlength="30" name="ssid"><br>
   <label>Key:&nbsp;&nbsp;&nbsp;&nbsp;</label><input maxlength="30" name="password"><br><br>
   <input type="submit" value="Save"> 
  </p>
  </form>
 </body>
</html>
)rawliteral";

