

#ifndef HAL_ULTRASONIC_H_
#define HAL_ULTRASONIC_H_

#define TriggerPort PORTA
#define TriggerPin  0

void Ultrasonic_init();
double Ultrasonic_getDistance();

#endif /* HAL_ULTRASONIC_H_ */
