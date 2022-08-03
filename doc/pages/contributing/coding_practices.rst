Coding Practices
================

All of the modules should be written in pure C since the goal is to be reusable across many embedded platforms. 

Documentation
-------------

All Modules should include a 'README.rst' file in the root of the modules directory. The README files are automatically combined and updated in the Reference section of this page. 
If the documentation contains references to other pages or images, they must be in a subdirectory named 'doc'.

.. note:: `README.md` files are also supported, but rst is preferred


Code Comments 
-------------

All public functions should be documented using doxygen style comments: 

.. code-block:: C 

    /**
     *@brief Draws a bitmap to the buffer
     *@param gfx ptr to mono_gfx_t descriptor
     *@param x x coord to begin drawing at
     *@param y y coord to begin drawing at
     *@param bmp bitmap to draw
     *@param val pixel value on
     *@return status of operation
     */
    mrt_status_t mono_gfx_draw_bmp(mono_gfx_t* gfx, int x, int y,const GFXBmp* bmp, uint8_t val);

Unit Tests
----------

The Unit Tester for MrT recursively searches the modules for any file ending with '_UT.cpp', and adds them to the GTest project. To add a Unit test to a module just add a file that ends with _UT.cpp. 

.. note:: To keep projects from trying to compile the Unit test files, they are wrapped with ``#ifdef UNIT_TESTING_ENABLED`` .. ``#endif //UNIT_TESTING_ENABLED``

Pull Requests
-------------

Because modules are typically developed as part of a seperate project, Pull Requests for the module should be reviewed along with the code for that project. There currently is not support for this on Bitbucket Cloud, but I am looking into a solution for this. 

