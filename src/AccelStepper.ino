#include <AccelStepper.h>
#include <MultiStepper.h>

#define STEPS       200
#define MICROSTEPS  16

#define S1_EN   1
#define S1_DIR  2
#define S1_STEP 3
#define S2_EN   4
#define S2_DIR  5
#define S2_STEP 6

AccelStepper stepper1(AccelStepper::DRIVER, S1_STEP, S1_DIR);

void setup() {
    stepper1.setEnablePin(S1_EN);
    stepper1.setMaxSpeed(STEPS * 1);
    stepper1.setAcceleration(STEPS);
    stepper1.moveTo(STEPS * 10);
}

void loop() {
    if (stepper1.distanceToGo() == 0) {
        // stepper1.disableOutputs();
        stepper1.moveTo(-stepper1.currentPosition());
    }
    stepper1.run();
}
