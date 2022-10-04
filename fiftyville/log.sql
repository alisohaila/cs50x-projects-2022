-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT description
FROM crime_scene_reports
WHERE day=28 AND month=7 AND year=2020 AND street="Chamberlin Street"

SELECT name
FROM people
JOIN courthouse_security_logs ON people.license_plate = courthouse_security_logs.license_plate
WHERE day= "28" AND month = "7" AND year = "2020" AND hour = "10" AND minute >= "15"
-- INCOMPLETE