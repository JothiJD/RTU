#include <string.h>
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_log.h"
#include "esp_http_client.h"

static const char *TAG = "CLOUD";

#define THINGSPEAK_KEY		"H9G38689DQFAMMQL"



void send_to_thingspeak (int value1, int value2)
{
	char url[256];
	sprintf (url, "http://api.thingspeak.com/update?api_key=%s&field1=%d&field2=%d",
				THINGSPEAK_KEY, value1, value2);
				
	esp_http_client_config_t config = {
		.url = url,
		.method = HTTP_METHOD_GET,
    };
    esp_http_client_handle_t client = esp_http_client_init(&config);
    
     // GET
    esp_err_t err = esp_http_client_perform(client);
    if (err == ESP_OK) {
        ESP_LOGI(TAG, "HTTP GET Status = %d, content_length = %"PRId64,
                esp_http_client_get_status_code(client),
                esp_http_client_get_content_length(client));
    } else {
        ESP_LOGE(TAG, "HTTP GET request failed: %s", esp_err_to_name(err));
    }
    
    esp_http_client_cleanup(client);
}