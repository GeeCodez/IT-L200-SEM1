# ENHANCED ER DIGRAMS
* **ERD** model is used to identify the model that has resulted from extending the original E-R model with new modelling constructs.
* It has support for subtypes and supertypes,specialization/generalization, categories/union types.
* **Supertypes**: Its is a generic entity type that has one or more subtypes. e.g Person in the university
* **Supertypes**: a subgrouping of the entities in an entity type that is derived from subtype that is meaningful to the organization. eg. persons can be classified as students or lectures.

## GENERALIZATION AND SPECIALIZATION
### Generalization
* Defining a more generalized entity from a more specialized entity. BOTTOM-UP
* Defining one or more subtypes from the supertype and forming the supertype/subtype relationship.

**Completeness constraint** addresses the question of whether and instance of a supertype must also be a member of at least one sub type.
It can be total or partial