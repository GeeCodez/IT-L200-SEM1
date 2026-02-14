### COSTS AND RISKS WITH DATABASE MANAGEMENT SYSTEMS
* Cost of getting skilled personnel 
* Installation , management and complexity cost: purchase of  hardware
* Conversion costs: updating an existing system to a new system, data could be lost in conversion process
* It requires explicit backup
* Organizational conflict: resistance to change and the replacement of humans by systems

### ELEMENTS OF DATABASE
* Data models {Enterprise and project }
* Entity
* Relationship
* Relational databases

#### DATA MODEL
A graphical system that is capturing nature and relationship of a data. It has two types :
* **Enterprise data models**: It is a high level abstraction of entities and their relationships in an organization.
At this stage, the whole business process is evaluated in order to know the database tables that will be involved.
Relationships are identified at this stage
At this stage, you identify the business process. 
An ERD that has the business process in it, should be able to be read bacake and forth.
This is just an overview of the tables with no details or attributes. 

* **Project Data Models**: This is a detailed view of the entities and relations which matches the data structure of an organization. 
Drawing an ERD diagram for project data model, we draw it with the details and the ids and the key relations.


##### CARDINALITITES IN DATABASES
1. ---0--|---   OPTIONAL
2. ----|--|--   MANDATORY
3. ---0--<---   OPTIONAL FOR MANY
4. ---|--<---   MANDATORY FOR MANY