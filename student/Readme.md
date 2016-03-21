This is the homework project of Drupal Back-end Course

Create a drupal module called “students” that does the following:

1. Creating tables
  1. When the module is enabled, it should create a schema to store the followingdata: id, name, gender, faculty number.
2. Add Permissions
  1. 'access students content'
  2. 'edit students content'
  3. 'delete students content'
3. Create a page called "Add students".
  1. Only users with permission 'edit students content' should be able to access the page.
  2. The page should have a form for adding a student. Fields: Name (textfield), Gender (radio button with two options), faculty number (textfield that should accept 8 digits only).
  3. On save the form should store student's data in the database.
4. Create a page called 'Students'.
  1. Only users with permission ‘access students content’ should be able toaccess the page.
  2. All existing students must be listed in a table. (use theme_table())
  3. Each table row must contain an edit link. Only users with permission 'edit students content' should should be able to access this link. The edit link should redirect
the user to a form for editing the exact student. On save the user should be redirected
back to "Students" page.
  4. Each table row must contain a delete link. Only users with permission 'delete students content' should should be able to access this link.
  5. When there is no students on the list, the table should have a message
saying "No student data are added yet".
5. Add AJAX functionality
  1. Deleting a student shouldn't refresh the page, instead remove the table row
with AJAX.
  2. Add drag and drop rows order functionality to the table.
You can add any other additions to extend or enhance the module functionality
