## CONVERTING DATA INTO SIGNALS
* There are four main combinations of data and signals
    - Analog data transmitted using analog signals
    - Digital data transmitted using digital signals
    - Analog data transmitted using digital signals
    - Digital data transmitted using discrete analog signals

### 1. Transmitting Analog Data with Analog signals
* To transmit analog data, you can modulate the data onto a set of anaolog signals. Eg: broadcast radio and TVs

### 2. Transmittig digital data with digital signals: digital encoding scheme.
* There are many techniques for this. They include:
    - NRZ-L (1-down, 0-up)
    - NRZI (starts with 1-up, voltage changes only if it meets another 1)
    - Manchester
    - Differential Manchester
    - Bipolar AMI
* They are used in LANs and some telephone systems.

### Non Return to Zero Digital Encoding Schemes
* Non-return to zero level (NRZ-L) transmits 1s as Zero voltage and 0s as positive Voltages
* Nonreturn to zero inverted(NRZI) has a voltage change at the beginning of a 1 and no voltage change at the beginning of a 0
* Differences:
    - with NRZ-L, the receiver has to check the voltage level for each bit to determine whether the bit is 0 or 1
    - with NRZ-I, the receiver has to determine whether there is a change at the beginning of the bit to determine if it is a 0 or 1
[image to be inserted ]

### Manchester Digital Encoding schemes
* With the differential Manchester code, every bit has at least one significant change.
* Some bits have two signal changes per bit (baud rate = twice bps)
[Insert image and understand]