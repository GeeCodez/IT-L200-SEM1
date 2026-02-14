## SYSTEM DEV METHODOLOGIES: DEEP DIVE 

### WATERFALL MODEL
* 5 stages
* introduced by Winston Royce 
* Each phase must be completed before the next phase
* Req analysis and specs, design and implementation, design, implement testing , operation and maintenance phase

#### Requirements analysis and spec phase
* Customer and the dev work together to document all the functions, perf and interfacing requirments.
* Describes the **what** of the system to be produced and not the how.
* The document is the **Software Requirements Specifications**: contains detailed description of what the system will do in the common language.
**COMMON LANGUAGE**


#### Design Phase 
* Transforms the reqs to a suitable form which is suitable for coding. 
* defines the overall software architecture together with high level and detailed design. 
* Documented in **Software Design Document**
* Excludes the customer due to technical stuff

#### Implementation and Unit testing
* Design is implemented by coding and its smooth because all information needed by the dev are already provided
* Testing -> unit testing
* Integration testing// risky

#### INTEGRATION TESTING

#### Operation and maintenance phase

#### WHEN TO USE THE WATERFALL MODEL
* When requirements are constant and not changed regularly
* Project is short
* When the tools and the tech used is consistent and not changing.


#### ADVANTAGES OF WATERFALL MODEL
* Simple to implement 
* Simple requirements and explicit declared
* Relase date is predetermined
* Its easy to 

#### DISADVANTAGES
* High risk and not suitable for complex systems
* Difficult to make ammends to the system after a phase is completed


### SPIRAL MODEL
* Normally used for large projects that involve high risks
* Risk management -> Prototyping -> design -> Code -> Integration -> Testing -> Implementation -> Release -> NEXT PHASE (Planning) -> Review -> Object Identificaiton


#### WHEN TO USE 
* Deployment is required to be frequent
* Large projects
* Unclear requirements and complex system
* May change at any time
* High budget projects 
* Ideal for CI/CD Applications
*Mandatory extra reading*

### V- MODEL
* Verification and the Validation model
*Mandatory extra reading*
* Dev Life cycle: Business req. specifications -> System req. specs -> High level Desig -> Low level design -> Coding ( Verification Phase )
* Tester Cycle: Coding -> Unit testing -> Component Testing -> System integration testing -> Acceptance testing 