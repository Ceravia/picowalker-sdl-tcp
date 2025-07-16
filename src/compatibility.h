// compatibility.h
#ifndef COMPATIBILITY_H
#define COMPATIBILITY_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Dummy variables
extern int pw_audio_volume;
extern const uint16_t PW_AUDIO_PERIODTAB[];

// Dummy functions
void pw_power_init(void);
void pw_time_init_rtc(void);
uint64_t pw_time_get_us(void);
void pw_screen_sleep(void);
void pw_screen_wake(void);
//void pw_ir_sleep(void);
//void pw_ir_wake(void);
void pw_power_enter_sleep(void);
int pw_power_get_battery_status(void);
int pw_power_should_sleep(void);
int pw_power_get_wake_reason(void);
void pw_time_delay_ms(int ms);
void pw_time_set_rtc(void*);
void* pw_time_get_rtc(void);
void* pw_time_get_dhms(void);

#ifdef __cplusplus
}
#endif

#endif // COMPATIBILITY_H

