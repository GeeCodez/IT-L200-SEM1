# FUNDAMENTALS OF DATA AND SIGNALS

* **Data** are entities that convey meaning.
* **Signals** are electromagenetic impulses used to encode and transmit data.
* Data and signals can be analog/digital and they are transmitted through a network.

## ANALOG VS DIGITAL SIGNALS
### ANALOG
* Its a continous waveform with examples as naturally occuring music and voice.
* hard to seperate noise from analog signals.
[Image to be inserted here]

### DIGITAL SIGNALS
* discrete non-continous waveform
* Can only appear in fixed number of forms
* Noise in digital signal:
    - You can discern a high voltage from a low voltage
    - when there is too much noise, you cannot discern a high voltage from a low voltage.

### FUNDAMENTALS OF SIGNALS
* All signals have amplitude, frequency and phase.

#### Amplitude
* The height of the wave above or below a given reference point measured in volts.

#### Frequency
* Number of times a signal makes a complete circle within a given time frame measured in Hertz(Hz) or cycles per second(period=1/frequency)
* **Spectrum**: range of frequencies that signal spans from min to max.
* **Bandwith**: absolute value of the difference between the min and max frequencies of a signal. If min and max frequencies are 3100Hz and 300Hz then bandwith is 2800Hz

#### Phase
* The position of the waveform relative to a given moment of time or relative to time zero.
* A phase change can be any angle btn 0 and 360 degrees but they mostly occur at 45, 90, 135, etc.
* If a signal can experience 2 different phase angles, then 1 bit can be transmitted with each signal change(each baud)
* If a signal can experience 4 diferent phase angles, then 2 bit can be transmitted with each signal change.
* **No of bits transmitted per signal change = log2(no of phase angles)**

### Loss of signal strengths
* **Attentuation** is the loss of signals over a given period of time. Denoted as decibels(dB) loss.
* Decibel losses are additive.
* **Formula for decibel(dB)** dB=10 x log10(P2/P1) where P1 is the starting power level and P2 is the ending power level.
