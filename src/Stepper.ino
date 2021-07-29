#include <Stepper.h>

#define STEPS 200

#define S1_EN   1
#define S1_DIR  2
#define S1_STEP 3
#define S2_EN   4
#define S2_DIR  5
#define S2_STEP 6

Stepper stepper1 = Stepper(STEPS, S1_STEP, S1_DIR);
// Stepper stepper2 = Stepper(STEPS, S2_STEP, S1_DIR);

void setup() {

}

void loop() {

}
