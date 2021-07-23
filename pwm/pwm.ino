#define B_IA 10 // D10 --> Motor B Input A --> MOTOR B +
#define B_IB 11 // D11 --> Motor B Input B --> MOTOR B -
#define A_IA 6  // D6  --> Motor A Input A --> MOTOR A +
#define A_IB 5  // D5  --> Motor A Input B --> MOTOR A -
// functional connections
#define MOTOR_B_PWM B_IA // Motor B PWM Speed
#define MOTOR_B_DIR B_IB // Motor B Direction
#define MOTOR_A_PWM A_IA // Motor B PWM Speed
#define MOTOR_A_DIR A_IB // Motor B Direction
// the actual values for "fast" and "slow" depend on the motor
#define PWM_SLOW 50  // arbitrary slow speed PWM duty cycle
#define PWM_FAST 200 // arbitrary fast speed PWM duty cycle
#define DIR_DELAY 1000 // brief delay for abrupt motor changes
 
void setup(){
Serial.begin( 9600 );
 pinMode( MOTOR_B_DIR, OUTPUT );
 pinMode( MOTOR_B_PWM, OUTPUT );
 pinMode( MOTOR_A_DIR, OUTPUT );
 pinMode( MOTOR_A_PWM, OUTPUT );
   digitalWrite( MOTOR_B_DIR, LOW );
   digitalWrite( MOTOR_B_PWM, LOW );
   digitalWrite( MOTOR_A_DIR, LOW );
   digitalWrite( MOTOR_A_PWM, LOW );
}

void loop(){
