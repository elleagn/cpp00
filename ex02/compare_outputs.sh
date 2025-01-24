#!/bin/bash

./accounts | awk '{print $2}' > my_output.log;
cat 19920104_091532.log | awk '{print $2}' > desired_output.log;
diff my_output.log desired_output.log;
