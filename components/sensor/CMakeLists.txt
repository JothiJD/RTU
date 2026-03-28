idf_component_register(
    SRCS "dht11.c"
    INCLUDE_DIRS "."
    PRIV_REQUIRES esp_timer esp_driver_gpio
)