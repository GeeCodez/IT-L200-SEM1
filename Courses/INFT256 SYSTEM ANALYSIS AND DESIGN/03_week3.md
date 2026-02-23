# SOFTWARE DEVELOPMENT METHODOLOGIES
* Methodologies to be discussed: waterfall, rapid app dev(rad), spiral model, v-model

## WATERFALL MODEL
* Introduced by Winston Royce
* Has 5 stages
* Requirment analysis and specification -> Design -> implementation and unit testing -> Integration and system testing -> Operation and maintenance.
![Stages of waterfall model](images/waterfall_steps.png)

#### REQUIREMENTS ANALYSIS AND SPECIFICATIONS
* Aim: Understand and document customer's requirements
* Both dev and customer work to document functions, performance and interfacing requirements.
* It describes the **WHAT** of the system **not the HOW**
* Document produced is **Software Requirment Specification**. Details of what the system will do in natural language.

#### DESIGN PHASE
* Transforms **SRS** into a suitable form for programming
* Defines overall system architecture together with high level and detailed design into a document called **Software Design Document (SDD)**

#### IMPLEMENTATION AND UNIT TESTING
* Design is implemented smoothly due to complete SDD
* Code is tested thoroughly. Unit testing, initially
* Interaction and flow tested later

#### INTEGRATION AND SYSTEM TESTING
* A crucial stage. Quality is determined at this stage
* Modules are test for their interaction with each other and with system.

#### OPERATIONS AND MAINTENANCE
* Performed by users after software has been delivered to customer.

### WHEN TO USE WATERFALL MODEL
* Constant requirements
* Short projects
* tools are consistent
* Resources are prepared and ready to use

### Advantages of Waterfall Model
* Simple to implement and minimal resource requirements
* Simple requirements and explicitly declared.
* Start and endpoints are fixed. makes it easy to cover progress

### Disadvantages of Waterfall Model
* High risk factor which is not suitable for complex projects
* Model cannot adapt to changes during dev. 
* Difficult to go back to a phase.


## SPIRAL MODEL
* By Barry Boehm
* Evolutionary process that combines iterative prototyping with structured approach of the linear sequential model.
* Developed circles of incremental releases
* Ealier iterations produce prototypes whiles later produce more complete systems.
![Spiral Model](/images/spiral.png)
* Each cycle is in four parts: Objective setting, Risk assesment and reduction, dev't and validation (benchmarking,simulation), Planning. 
* It is risk driven. 
* Cycle ends with a review and planning for the next cycle.
* Suitable for new dev and system enhancement

### WHEN TO USE SPIRAL MODEL
* When deliverance is required to be frequent.
* When the project is large
* When requirements are unclear and complex
* When changes may require at any time
* Large and high budget projects

### Advantages
High amount of risk analysis
Useful for large and mission-critical projects.

### Disadvantages
Can be a costly model to use.
Risk analysis needed highly particular expertise
Doesn't work well for smaller projects.


## THE V-MODEL
* Contains validation and Verification, joined by coding.
![V-Model](/images/vmodel.png)

### PHASES OF VERIFICATION
1. **Business requirement analysis**
2. **System Design**: analyse and interpret the proposed system. 
3. **Architecture design**
4. **Module design**: system broken into detailed modules known as **Low level design**
5. **Coding phase**

### PHASES OF THE VERIFICATION MODEL
1. **Unit testing**
2. **Integration testing**: during architectural design phase
3. **System testing**: Done by the clients business team. Checks if expectations are met
3. **Acceptance Testing**: Related to business analysis. Done in the user atmosphere
4. Discovers non-functional problems like load and performance defects with the real user.
