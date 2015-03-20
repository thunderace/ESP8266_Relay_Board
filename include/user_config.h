#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define ICACHE_STORE_TYPEDEF_ATTR __attribute__((aligned(4),packed))
#define ICACHE_STORE_ATTR __attribute__((aligned(4)))
#define ICACHE_RAM_ATTR __attribute__((section(".iram0.text")))
#define ICACHE_RODATA_ATTR __attribute__((section(".irom.text")))

#define CFG_HOLDER	0x00FF55A2
#define CFG_LOCATION	0x3C

#define FWVER "0.65/March 15 2015"

/*DEFAULT CONFIGURATIONS*/

#define STA_MODE      "static"
#define STA_IP        "192.168.1.3"
#define STA_MASK      "255.255.255.0"
#define STA_GW        "192.168.1.1"
#define STA_SSID      "" 
#define STA_PASS      ""
#define STA_TYPE      AUTH_WPA2_PSK

#define AP_IP         "192.168.4.1"
#define AP_MASK       "255.255.255.0"
#define AP_GW         "192.168.4.1"

#define HTTPD_PORT      80
#define HTTPD_AUTH      0
#define HTTPD_USER      "admin"
#define HTTPD_PASS      "pass"

#define NTP_ENABLE    0
#define NTP_TZ  	    2

#define MQTT_ENABLE			  0
#define MQTT_HOST			    "mqtt" //host name or IP "192.168.11.1"
#define MQTT_PORT			    1883
#define MQTT_KEEPALIVE		120	 /*seconds*/
#define MQTT_DEVID			  "ESP_%08X"
#define MQTT_USER			    ""
#define MQTT_PASS			    ""
#define MQTT_USE_SSL		  0
#define MQTT_RELAY1_CMD 		    "/home_dev/nodes/esp_%08X/controls/SW1/command"
#define MQTT_DHT22_TEMP_PUB_TOPIC    "/home_dev/nodes/esp_%08X/sensors/T1/value" 
#define MQTT_DHT22_HUMI_PUB_TOPIC   "/home_dev/nodes/esp_%08X/sensors/H1/value" 		
#define MQTT_DHT11_TEMP_PUB_TOPIC   "/home_dev/nodes/esp_%08X/sensors/T2/value" 
#define MQTT_DHT11_HUMI_PUB_TOPIC   "/home_dev/nodes/esp_%08X/sensors/H2/value" 		
#define MQTT_DS18B20_TEMP_PUB_TOPIC "/home_dev/nodes/esp_%08X/sensors/T3/value"   	

#define SENSOR_DS18B20_ENABLE     0
#define SENSOR_DHT22_ENABLE       0
#define SENSOR_DHT11_ENABLE       0

#define RELAY_LATCHING_ENABLE     0
#define RELAY1NAME       "Relay 1"
#define RELAY2NAME       "Relay 2"
#define RELAY3NAME       "Relay 3"
	
#define MQTT_BUF_SIZE		255
#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/
#define MQTT_CONNTECT_TIMER 	5 	/**/

#endif

