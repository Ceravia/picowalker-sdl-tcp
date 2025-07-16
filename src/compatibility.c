// compatibility.c
#include "compatibility.h"
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <fcntl.h>
// Dummy variables
int pw_audio_volume = 100;
const uint16_t PW_AUDIO_PERIODTAB[1] = {0};

// Dummy functions
void pw_power_init(void) {}
void pw_time_init_rtc(void) {}

uint64_t pw_time_get_us(void) { 
    //printf("Getting time\n");
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_usec;

}
void pw_screen_sleep(void) {}
void pw_screen_wake(void) {}


void pw_power_enter_sleep(void) {}
int pw_power_get_battery_status(void) { return 0; }
int pw_power_should_sleep(void) { return 0; }
int pw_power_get_wake_reason(void) { return 0; }
void pw_time_delay_ms(int ms) {usleep(ms * 1000);}
void pw_time_set_rtc(void* t) {}
void* pw_time_get_rtc(void) { return NULL; }
void* pw_time_get_dhms(void) { return NULL; }

