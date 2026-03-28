idf_component_register(SRCS "main.c"
                    INCLUDE_DIRS "."
                    REQUIRES sensor wifi_manager cloud 
                    PRIV_REQUIRES esp_wifi nvs_flash esp_http_client)
