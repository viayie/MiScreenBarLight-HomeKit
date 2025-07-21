/* HomeKit Lightbulb Example
*/

#ifndef _LIGHTBULB_H_
#define _LIGHTBULB_H_

/**
 * @brief initialize the lightbulb lowlevel module
 *
 * @param none
 *
 * @return none
 */
void lightbulb_init(void);

/**
 * @brief deinitialize the lightbulb's lowlevel module
 *
 * @param none
 *
 * @return none
 */
void lightbulb_deinit(void);

/**
 * @brief turn on/off the lowlevel lightbulb
 *
 * @param value The "On" value
 *
 * @return none
 */
int lightbulb_set_on(bool value);

/**
 * @brief set the brightness of the lowlevel lightbulb
 *
 * @param value The Brightness value (0-100)
 *
 * @return 
 *     - 0 : OK
 *     - others : fail
 */
int lightbulb_set_brightness(int value);

/**
 * @brief set the color temperature of the lowlevel lightbulb
 *
 * @param value The Color Temperature value in mired (154-370 for 6500K-2700K)
 *
 * @return 
 *     - 0 : OK
 *     - others : fail
 */
int lightbulb_set_color_temperature(int value);

#endif /* _LIGHTBULB_H_ */
