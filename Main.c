#include "STD_TYPES.h"
#include "MDIO/MDIO_Interface.h"
#include <util/delay.h>
#define  MOTOR_SPEED 1.45
#define C_CPU 8000000UL // Define CPU frequency for accurate delay calculations



int main(void)
{
    // Initialize the MDIO and LCD
    MDIO_IntialPins();  // Initialize all necessary pins (assuming this function sets up ports and pins)

    while (1)
    {
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_3,MDIO_LOW);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_4,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_5,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_HIGH);
_delay_ms(MOTOR_SPEED);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_3,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_4,MDIO_LOW);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_5,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_HIGH);
_delay_ms(MOTOR_SPEED);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_4,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_5,MDIO_LOW);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_3,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_HIGH);
_delay_ms(MOTOR_SPEED);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_5,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_LOW);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_4,MDIO_HIGH);


_delay_ms(MOTOR_SPEED);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_4,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_5,MDIO_HIGH);
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_3,MDIO_HIGH);
    }

}
