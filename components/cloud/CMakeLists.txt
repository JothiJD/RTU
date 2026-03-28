idf_component_register(SRCS "cloud.c"
                    INCLUDE_DIRS "."
                    REQUIRES wifi_manager
                    PRIV_REQUIRES esp_wifi esp_http_client nvs_flash
)
