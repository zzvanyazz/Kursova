--
-- ���� ������������ � ������� SQLiteStudio v3.2.1 � �� ��� 14 19:54:58 2018
--
-- �������������� ��������� ������: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- �������: department
CREATE TABLE department (ID INT PRIMARY KEY, Name TEXT);

-- �������: specialty
CREATE TABLE specialty (ID INT PRIMARY KEY, department INT REFERENCES department (ID), long_name TEXT, short_name VARCHAR (4) NOT NULL, number INT UNIQUE NOT NULL, schedule INT);

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;
