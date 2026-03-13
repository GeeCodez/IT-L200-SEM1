A signal starts at point X. As it travels to point Y,it loses 8dB
At point y, the singal is boosted by 10 dB

Group 1.
Differential Manchester and Bipolar AMI digital encoding Scheme.
More diagrams are preferred and less text. Explain in details.
Prepare a full fledged document that is detailed and binded. This will be submitted.

# MULTIPLEXING
* Trasnferring multiple signals through a single medium.
* Medium is the channel through which data can be transmitted
* For mutiple signals to share a medium, the medium mast somehow be divided given each signal a portion of the total bandwidth

## TECHNIQUES FOR MULTIPLEXING

### 1. FREQUENCY DIVISION AND MULTIPLEXING
* Assignment of nonoverlapping frequency ranges to each "user" or signal on a medium
    - The trasmit at the same time using diff frequencies.
* Multiplexor accepts input and assigns frequncies to each device.(Many to one)
    -  It takes multiple signals and converts them into a single signal.
* Demultiplexor accepts the single signal from the multiplexor and breaks them down to individual signals(one to many)
* It makes use of analog signals. Eg: radio, broadcast radio, television, cable TV
* It is the oldest and there is huge probability of noise.

### 2. TIME DIVISION MULTIPLEXING
* Sharing of the signals is accomplished **by dividing the available time** on a medium among users.
* Signal is digital.
* **Synchronous time division multiplexing**: 
    - The original technique.
    - Multiplexor accepts inputs from attached devices in a round-robin fashion and transmits the data in a never-ending patterns.
    - If one device generates data more than the others then:
        - The multiplexor must sample the incoming data from that device more than it samples the other devices.
        - OR buffer the faster incoming stream.
    - If the device has nothing to transmit, the multiplexor must still input something to represent it being idle. Must be defined in a key.

* **Asynchronous(Statistical) time division multiplexing**: 
    - Only transmits data from active users/workstations.
    - This accepts the incoming data streams and create a frame containing the data to be transmitted.
    - To identify each piece of data, an address is included.
    - If the data is of variable length, the length is also added. 
    - Transmitted frame normally contains a group of data frames known a packets.


### 3. T1 - MULTIPLEXING
