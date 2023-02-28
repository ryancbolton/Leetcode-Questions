SELECT firstName, lastName, Address.city, Address.state FROM Person
LEFT OUTER JOIN Address
ON Person.personID = Address.personID