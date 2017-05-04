

I have the following analysis done on my local for the ticket https://usafootball.atlassian.net/browse/WR-1561

Lets consider the data for certifcates and the courses

Certificate =
  id -> 39,
  title -> Flag Certification

Courses
---
  id -> 79,
  title -> Flag Health and Safety
--
  id -> 45,
  title -> Flag Skills

Root cause of issue
In 2016 Certificate " Flag Certification", had only a coure Flag Health and Safety course associated with it,

So when User purchased the "Flag Certification", He was able to get the associated courses, whose created_at and updated_at
has date for 2016.

Now in 2017
 Certifcate " Flag Certification", Had Another Course "Flag Skills" Added to the certificate,
So He bought the certificate in 2017, which led to action of purchasing of both the course,
 now here lies the problem,
Previous year course "Flag Health and Safety" was actually made to re-purchased, as logic of code which
 makes returning purchased user course code without updating update_at date column of Previouis user course
  and in our case course "Flag Health and Safety",
Behind the scenes both of them got purchased, technically but course "Flag Health and Safety",
 has still updated_at 2016 and the newly added has 2017 in created date and updated_at


 Solution
 1. Find all the users with such use case  and repurchaes the course of marking its coures update_at 2017
 2. Make actuall repurchase logic change where , instead of returning
  the previous purchased course create new purchase record with it updated_at and created_at date set accordingly

  I Think I would like to recommend second option, Becaues in long run,tickets related
   to course expiration for previous year needs
    to be implemented and coures purchase history in db can be beneficial in log run

