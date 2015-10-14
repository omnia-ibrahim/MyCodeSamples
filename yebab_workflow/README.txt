This module is for managing content between editors and moderators.

To setup this module you need the following:

1- Give permissions to both moderators and chief editors.

in yebab_workflow module: 

   Moderators permissions:
     yebab edit any content
     yebab workflow approval
   
   Editors permissions: 
     administer workflow
     yebab workflow approval
      
in jamaluk module:

  Moderators permissions:
    access content
    create article content
    edit any article content
    edit own article content
    override article authored by option
    override article authored on option
    override article promote to front page option
    view simplemenu
    
  Editors permissions:
    access content
    administer nodes
    delete any article content
    edit any article content
    override article published option
    view simplemenu
