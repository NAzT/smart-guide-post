
#include <CMMC_Legend.h>
#include "modules/PRAJ_ESPNowModule.h"

CMMC_Legend os;

void setup()
{
  os.setup();
  Serial.printf("APP VERSION: %s\r\n", LEGEND_APP_VERSION);
}

void loop()
{
  os.run();
}