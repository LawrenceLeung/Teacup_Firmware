// default thermistor lookup table

// How many thermistor tables we have
#define NUMTABLES 1

#define THERMISTOR_EXTRUDER	0
// #define THERMISTOR_BED		1

// Thermistor lookup table, generated with --num-temps=50 and trimmed in lower temperature ranges.
// You may be able to improve the accuracy of this table in various ways.
//   1. Measure the actual resistance of the resistor. It's "nominally" 4.7K, but that's ± 5%.
//   2. Measure the actual beta of your thermistor:http://reprap.org/wiki/MeasuringThermistorBeta
//   3. Generate more table entries than you need, then trim down the ones in uninteresting ranges. (done)
// In either case you'll have to regenerate this table, which requires python, which is difficult to install on windows.
// Since you'll have to do some testing to determine the correct temperature for your application anyway, you
// may decide that the effort isn't worth it. Who cares if it's reporting the "right" temperature as long as it's
// keeping the temperature steady enough to print, right?
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=4066 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 4066
// max adc: 1023
#define NUMTEMPS 20
// {ADC, temp*4 }, // temp
//uint16_t temptable[NUMTABLES][NUMTEMPS][2] PROGMEM = {
//{
//   {1, 3364}, // 841.027617469 C
//   {21, 1329}, // 332.486789769 C
//   {41, 1104}, // 276.102666373 C
//   {61, 987}, // 246.756060004 C
//   {81, 909}, // 227.268080588 C
//   {101, 851}, // 212.78847342 C
//   {121, 805}, // 201.30176775 C
//   {141, 767}, // 191.787692666 C
//   {161, 734}, // 183.662212795 C
//   {181, 706}, // 176.561442671 C
//   {201, 680}, // 170.244089549 C
//   {221, 658}, // 164.542298163 C
//   {241, 637}, // 159.33475843 C
//   {321, 567}, // 141.921298995 C
//   {381, 524}, // 131.166509425 C
//   {581, 406}, // 101.561865389 C
//   {781, 291}, // 72.9710018071 C
//   {881, 219}, // 54.8051659223 C
//   {981, 93}, // 23.4825243529 C
//   {1010, 1} // 0.498606463441 C
//}
//};


// Honeywell 135-104LAF-J01

// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 3887
// max adc: 1023
uint16_t temptable[NUMTABLES][NUMTEMPS][2] PROGMEM = {
{
   {1, 4006}, // 1001.71117102 C
   {54, 1099}, // 274.998648224 C
   {107, 892}, // 223.199490185 C
   {160, 782}, // 195.555426705 C
   {213, 706}, // 176.605250509 C
   {266, 648}, // 162.013877718 C
   {319, 599}, // 149.973301818 C
   {372, 558}, // 139.557023231 C
   {425, 520}, // 130.221351181 C
   {478, 486}, // 121.61172574 C
   {531, 453}, // 113.47355886 C
   {584, 422}, // 105.604643148 C
   {637, 391}, // 97.8248524565 C
   {690, 359}, // 89.9511913934 C
   {743, 327}, // 81.7689693788 C
   {796, 291}, // 72.9854545149 C
   {849, 252}, // 63.1326944407 C
   {902, 205}, // 51.306137733 C
   {955, 140}, // 35.1693302737 C
   {1008, 8} // 2.08282162126 C
}
};
