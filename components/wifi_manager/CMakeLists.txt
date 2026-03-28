idf_component_register(SRCS "wifi_manager.c"
                    INCLUDE_DIRS "."
                    REQUIRES sensor
                    PRIV_REQUIRES esp_wifi nvs_flash esp_http_client)
