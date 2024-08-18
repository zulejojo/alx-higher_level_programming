-- Step 1: Convert the database character set and collation to utf8mb4
ALTER DATABASE `hbtn_0c_0` CHARACTER SET = utf8mb4 COLLATE = utf8mb4_unicode_ci;

-- Step 2: Convert the table character set and collation to utf8mb4
ALTER TABLE `hbtn_0c_0`.`first_table` CONVERT TO CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;

-- Step 3: Convert the specific column (name) to utf8mb4
ALTER TABLE `hbtn_0c_0`.`first_table` MODIFY `name` VARCHAR(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
