import os

# Define the nested folder structure
folder_structure = {
    '001. Same Function Name': [
        '001. Basic Function Overloading',
        '002. Function Overloading with Different Number of Parameters',
        '003. Function Overloading with Different Order of Parameters',
        '004. Function Overloading with Default Arguments',
        '005. Function Overloading and Type Promotion',
        '006. Function Overloading and Const Keyword',
        '007. Function Overloading with Pointer Parameters',
        '008. Function Overloading with Array Parameters',
        '009. Function Overloading with References and Ambiguity',
        '010. Function Overloading with Template Functions',
    ],
    '002. Different Parameter Types': [
        '001. Basic Overloading with Different Parameter Types',
        '002. Overloading with Different Primitive Types',
        '003. Overloading with Reference Types'
        '004. Overloading with Pointer Parameters',
        '005. Overloading with Arrays of Different Types',
        '006. Overloading with const Parameters',
        '007. Overloading with User-defined Types (Struct)',
        '008. Overloading with Different Class Types',
        '009. Overloading with Template Functions and Different Parameter Types',
        '010. Overloading with Variadic Templates and Different Parameter Types',
    ],
    '003. Different Number of Parameters': [
        '001. Basic Function Overloading with Different Number of Parameters',
        '002. Overloading with Additional Default Parameters',
        '003. Overloading with Different Number of Floating Point Parameters'
        '004. Overloading with Variations in Array Size',
        '005. Overloading with Different Parameter Types and Different Number of Parameters',
        '006. Overloading with Pointer and Non-pointer Parameters',
        '007. Overloading with References and Different Number of Parameters',
        '008. Overloading with Class Objects and Different Numbers of Parameters',
        '009. Overloading with Template Functions and Different Numbers of Parameters',
        '010. Overloading with Variadic Functions and Different Numbers of Parameters',
    ],
    '004. Different Order of Parameters': [
        '001. Basic Function Overloading with Different Order of Parameters',
        '002. Overloading with Different Order of Parameters and Different Types',
        '003. Overloading with Mixed Parameter Orders (Primitive Types)'
        '004. Overloading with Pointer Parameters and Different Order',
        '005. Overloading with Reference Parameters and Different Order',
        '006. Overloading with User-defined Types and Different Order of Parameters',
        '007. Overloading with Class Methods and Different Order of Parameters',
        '008. Overloading with Template Functions and Different Order of Parameters',
        '009. Overloading with Default Parameters and Different Order',
        '010. Overloading with Variadic Templates and Different Order of Parameters',
    ],
    '005. Compile-time Polymorphism': [
        '001. Basic Compile-time Polymorphism using Function Overloading',
        '002. Compile-time Polymorphism with Function Overloading and Different Return Types',
        '003. Compile-time Polymorphism with Default Parameters'
        '004. Compile-time Polymorphism with References and Function Overloading',
        '005. Compile-time Polymorphism using Function Templates',
        '006. Compile-time Polymorphism with Overloaded Constructors',
        '007. Compile-time Polymorphism with Operator Overloading',
        '008. Compile-time Polymorphism using Overloaded Template Functions',
        '009. Compile-time Polymorphism with Variadic Templates',
        '010. Compile-time Polymorphism with Function Overloading and Inheritance',
    ],
    '006. Return Type Cannot Distinguish Overloads': [
        '001. Attempting to Overload Functions Differing Only by Return Type (Invalid Overloading)',
        '002. Correct Overloading Using Different Parameter Types',
        '003. Using Different Function Names Instead of Overloading by Return Type',
        '004. Using Output Parameters to Differentiate Results',
        '005. Using Function Templates to Handle Multiple Return Types',
        '006. Overloading Functions with Pointers to Different Return Types (Still Invalid)',
        '007. Using Type Traits and Templates to Simulate Return Type Overloading',
        '008. Overloading Operators Cannot Rely on Return Type',
        '009. Using Explicit Conversion Functions',
        '010. Advanced Example - Using std variant to Return Multiple Types',
    ],
    '007. Default Arguments': [
        '001. Simple Default Arguments',
        '002. Multiple Default Arguments',
        '003. Function Overloading with Default Arguments',
        '004. Default Arguments in Function Overloading with Ambiguity',
        '005. Avoiding Ambiguity by Providing More Arguments',
        '006. Default Arguments and Overloaded Constructors',
        '007. Default Arguments with Mixed Parameter Types',
        '008. Combining Default Arguments and Function Templates',
        '009. Default Arguments with Multiple Overloads and References',
        '010. Default Arguments with Function Pointers',
        '011. Overloading and Default Arguments Causing Ambiguity',
    ],
    '008. Ambiguity in Overloading': [
        '001. Basic Ambiguity',
        '002. Ambiguity with Default Arguments',
        '003. Ambiguity with Type Promotion',
        '004. Ambiguity with Implicit Conversions',
        '005. Ambiguity with Function Templates',
        '006. Ambiguity with Const and Non-const Overloads',
        '007. Ambiguity with Overloading and Arrays',
        '008. Ambiguity with Overloading and Enum Types',
        '009. Ambiguity with References and Value Parameters',
        '010. Advanced Ambiguity with Function Pointers',
        '011. Multiple Function Templates with Ambiguous Specializations',
    ],
    '009. Type Promotion and Conversion': [
        '001. Basic Type Promotion',
        '002. Implicit Type Conversion',
        '003. Type Promotion with Short',
        '004. Promotion of Float to Double',
        '005. Type Promotion with Function Overloading',
        '006. Promotion with Mixed Types',
        '007. Type Promotion with Pointers',
        '008. Type Promotion with Character to Integer',
        '009. Type Promotion with Function Templates',
        '010. Complex Type Promotion and Overloading',
        '011. Type Promotion with Enums',
    ],
    '010. Function Overloading vs. Function Overriding': [
        '001. Basic Function Overloading',
        '002. Function Overriding Basics',
        '003. Overloading vs Overriding',
        '004. Overloading with Inheritance',
        '005. Overloading and Overriding Combined',
        '006. Overloading with const Modifier',
        '007. Function Overriding with Covariant Return Types',
        '008. Ambiguity in Function Overloading and Overriding',
        '009. Final Keyword in Overriding',
        '010. Virtual Destructor in Overriding',
    ],
    '011. Performance Considerations': [
        '001. Basic Function Overloading Performance',
        '002. Function Overloading with Large Data Types',
        '003. Inlining and Function Overloading',
        '004. Template Overloading vs. Specific Overloading',
        '005. Function Overloading with Default Arguments',
        '006. Overloaded Functions and Return Value Optimization (RVO)',
        '007. Variadic Function Overloading and Performance',
        '008. Function Overloading with Move Semantics',
        '009. Inlining and Overloading with Complex Logic',
    ],
    '012. Inline Functions in Overloading': [
        '001. Simple Inline Function Overloading',
        '002. Inline Function Overloading with Different Parameter Types',
        '003. Inline Function Overloading with Const Parameters',
        '004. Inline Functions with Default Arguments in Overloading',
        '005. Complex Inline Function Overloading with Conditional Logic',
        '006. Performance Consideration - Inline Functions with Large Data Types',
        '007. Function Overloading with Inline Recursion (Advanced)',
        '008. Overloaded Inline Functions with Template Arguments',
    ],
    '013. Namespaces and Function Overloading': [
        '001. Basic Function Overloading with Namespaces',
        '002. Function Overloading in Multiple Namespaces',
        '003. Function Overloading and Using Directive',
        '004. Ambiguity in Function Overloading with Multiple Namespaces',
        '005. Inline Function Overloading with Namespaces',
        '006. Namespace Aliases and Function Overloading',
        '007. Function Overloading with Namespaces and Function Templates',
        '008. Overloading Resolution with Namespaces',
        '009. Function Overloading with Multiple Levels of Namespaces',
        '010. Ambiguity and Resolution with Namespace and Overloading',
    ],
    '014. Use of const in Overloading': [
        '001. Basic Overloading with const for Different Functions',
        '002. Overloading with const Reference Parameters',
        '003. Overloading with const Object Member Functions',
        '004. Overloading with Const Pointers',
        '005. Overloading with const in Return Types',
        '006. Ambiguity in Overloading with const',
        '007. const and Overloading with Arrays',
        '008. Overloading Const and Non-Const Versions in Large Classes',
        '009. Complex Class with Overloading Const and Non-Const Methods',
    ],
    '015. Template Functions and Overloading': [
        '001. Basic Overloading of Template and Non-Template Functions',
        '002. Overloading with Different Template Specializations',
        '003. Template Overloading with Multiple Types',
        '004. Template Function Overloading with Reference and Non-Reference',
        '005. Overloading Template and Non-Template with Different Parameter Types',
        '006. Overloading Template Functions with Default Arguments',
        '007. Template Function Specialization and Overloading',
        '008. Overloading with Variadic Template Functions',
        '009. Function Template Overloading with const Qualifiers',
        '010. Complex Overloading with Multiple Template Parameters and Specialization',
        '011. Overloading Template Functions with SFINAE',
    ],
}

# Root directory where the structure will be created
root_dir = "Function_Library"

# Function to create nested folders
def create_nested_folders(root, structure):
    for main_folder, subfolders in structure.items():
        main_path = os.path.join(root, main_folder)
        os.makedirs(main_path, exist_ok=True)  # Create main folder
        for subfolder in subfolders:
            sub_path = os.path.join(main_path, subfolder)
            os.makedirs(sub_path, exist_ok=True)  # Create subfolders

# Create the folder structure
create_nested_folders(root_dir, folder_structure)

print("Folder structure created successfully!")
