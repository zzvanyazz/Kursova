--
-- Файл сгенерирован с помощью SQLiteStudio v3.2.1 в Ср ноя 14 19:54:58 2018
--
-- Использованная кодировка текста: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- Таблица: department
CREATE TABLE department (ID INT PRIMARY KEY, Name TEXT);

-- Таблица: specialty
CREATE TABLE specialty (ID INT PRIMARY KEY, department INT REFERENCES department (ID), long_name TEXT, short_name VARCHAR (4) NOT NULL, number INT UNIQUE NOT NULL, schedule INT);

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;
