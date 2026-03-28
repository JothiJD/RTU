#ifndef WIFI_MANAGER_H
#define WIFI_MANAGER_H

#include <stdbool.h>

// WiFi status flag
extern bool isConnected;

// Initialize WiFi in station mode
void wifi_init_sta(void);

#endif