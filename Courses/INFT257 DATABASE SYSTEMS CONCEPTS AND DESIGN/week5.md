# ENHANCED ER DIGRAMS
* **ERD** the model that has resulted from extending the original E-R model with new modelling constructs.
* It has support for subtypes and supertypes,specialization/generalization, categories/union types.
* **Supertypes**: Its is a generic entity type that has relationship with one or more subtypes. e.g Person in the university
* **Subtypes**: a subgrouping of the entities in an entity type that is derived from supertype and is meaningful to the organization. eg. persons can be classified as students or lectures.
* **Attribute Inheritance**: when subtype entities share all the attributes of the supertype.

## GENERALIZATION AND SPECIALIZATION
* **GENERALIZATION**: Defining a more generalized entity type from a set of more specialized entity typess. BOTTOM-UP

* **SPECIALIZATION**: Defining one or more subtypes of the supertype and forming the supertype/subtype relationship.

### CONSTRAINTS IN SUBTYPE/SUPERTYPE RELATIONSHIP

**Completeness constraint** Whether and instance of a supertype must also be a member of at least one sub type.
    - It can be total(double lines) or partial(single line)

**Disjointness Constraints**: Whether an instance of a supertype may simultaneously be a member of two or more subtypes.
    - Disjoint rule: An instance of supertype can only be an instance of one of the subtypes.
    - Overlap Rule: A supertype instance could be an instance of more than one of the subtypes.

**Subtype Discriminator**: An attribute of the supertype whose values determines the subtype an entity belongs to.
    - **Disjoint**: a simple attribute with alternative values to indicate the possible subtypes.
    - **Overlapping**: a composite attribute whose subparts represent different subtypes. Each subpart contains a boolean value to determine whether an instance belongs to the associated subtype.

### ENTITY CLUSTERS
This is a set of one or more entity types and associated relationships grouped into a single abstract entity type.

### PACKAGED DATA MODELS.
* Predefined data models. They are universal or industry specific.

* **Universal data model**: a generic or template data model that could be used as a starting point for a data modelling project. Also called a pattern.

#### ADVANTAGES OF USING PACKAGED DATA MODELS
* It uses proven model components
* It saves time and cost
* There is less likelihood of errors.
* Easier to evolve over time.
* Aid in requirements determination.
* Easier to read.
* Supertype/Subtype hierachies promote reuse.
* Many-to-many relationships enhance model flexibility.
* Vendor-supplied data model fosters integration with vendor's application.
* They support inter-organizational systems.