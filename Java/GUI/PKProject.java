import javax.swing.*;  // Import Swing components for creating graphical user interfaces
import javax.swing.border.LineBorder;  // Import LineBorder class for adding borders to components
import java.awt.*;  // Import AWT classes for layout, colors, and fonts
import java.awt.event.ActionEvent;  // Import ActionEvent for handling button click events
import java.awt.event.ActionListener;  // Import ActionListener to respond to button actions

// Define a class Myframe that extends JFrame to create a custom window
class Myframe extends JFrame {
    // Declare UI components as private members of the class
    private JLabel background;  // JLabel to hold the background image
    private JLabel status;  // JLabel to display the status of tasks
    private JLabel usernameLabel;  // JLabel to label the username input
    private JTextField usernameField;  // JTextField to input the username
    private JButton pendingButton;  // JButton to mark tasks as pending
    private JButton completedButton;  // JButton to mark tasks as completed
    private JButton addButton;  // JButton to add a new task
    private JButton updateButton;  // JButton to update an existing task
    private JButton deleteButton;  // JButton to delete a task

    // Constructor for Myframe to set up the frame and initialize components
    Myframe() {
        // Set frame properties
        setTitle("TODOLIST");  // Set the title of the window
        setSize(1366, 768);  // Set the size of the window (width x height)
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // Set the default close operation to exit the application
        setLayout(null);  // Use absolute positioning to manually place components

        // Load and set the background image
        ImageIcon img = new ImageIcon("love.JPEG");  // Create an ImageIcon from the image file
        background = new JLabel("", img, JLabel.CENTER);  // Create a JLabel with the image, centered
        background.setBounds(0, 0, getWidth(), getHeight());  // Set the label to cover the entire frame
        add(background);  // Add the background label to the frame

        // Initialize and add components
        initComponents();  // Call method to initialize all the components
        addComponents();  // Call method to add components to the frame

        // Add action listeners to handle button clicks
        addActionListeners();  // Call method to attach event listeners to buttons

        // Make the frame visible
        setVisible(true);  // Show the frame
    }

    // Method to initialize UI components
    private void initComponents() {
        // Initialize and style the Status label
        status = new JLabel("Select Task Status");  // Create a label with the text "Select Task Status"
        status.setForeground(Color.WHITE);  // Set the text color to white for better contrast against dark backgrounds
        status.setFont(new Font("Arial", Font.BOLD, 36));  // Set the font to Arial, bold, size 36
        status.setOpaque(true);  // Make the label opaque so background color is visible
        status.setBackground(new Color(0, 0, 0, 100));  // Set a semi-transparent black background
        status.setBorder(new LineBorder(Color.WHITE, 2));  // Add a white border around the label

        // Initialize and style the Username label
        usernameLabel = new JLabel("Username:");  // Create a label with the text "Username:"
        usernameLabel.setForeground(Color.BLACK);  // Set the text color to black for readability
        usernameLabel.setFont(new Font("Arial", Font.BOLD, 24));  // Set the font to Arial, bold, size 24
        usernameLabel.setOpaque(true);  // Make the label opaque to display the background color
        usernameLabel.setBackground(new Color(255, 255, 255, 0));  // Set a fully transparent background color
        usernameLabel.setBorder(new LineBorder(Color.WHITE, 2));  // Add a white border around the label

        // Initialize and style the Username text field
        usernameField = new JTextField();  // Create a text field for username input
        usernameField.setBackground(Color.BLUE);  // Set the text field's background color to white for contrast
        usernameField.setForeground(Color.BLACK);  // Set the text color to black
        usernameField.setFont(new Font("Arial", Font.BOLD, 24));  // Set the font to Arial, bold, size 24
        usernameField.setBorder(new LineBorder(Color.BLACK, 2));  // Add a black border around the text field

        // Initialize and style the Pending button
        pendingButton = new JButton("Pending");  // Create a button labeled "Pending"
        pendingButton.setBackground(Color.RED);  // Set the button's background color to red
        pendingButton.setForeground(Color.WHITE);  // Set the text color to white for visibility
        pendingButton.setFont(new Font("Arial", Font.BOLD, 24));  // Set the font to Arial, bold, size 24

        // Initialize and style the Completed button
        completedButton = new JButton("Completed");  // Create a button labeled "Completed"
        completedButton.setBackground(Color.GREEN);  // Set the button's background color to green
        completedButton.setForeground(Color.WHITE);  // Set the text color to white for visibility
        completedButton.setFont(new Font("Arial", Font.BOLD, 24));  // Set the font to Arial, bold, size 24

        // Initialize and style the Add button
        addButton = new JButton("Add");  // Create a button labeled "Add"
        addButton.setBackground(Color.DARK_GRAY);  // Set the button's background color to dark gray
        addButton.setForeground(Color.WHITE);  // Set the text color to white for visibility
        addButton.setFont(new Font("Arial", Font.BOLD, 24));  // Set the font to Arial, bold, size 24

        // Initialize and style the Update button
        updateButton = new JButton("Update");  // Create a button labeled "Update"
        updateButton.setBackground(Color.ORANGE);  // Set the button's background color to orange
        updateButton.setForeground(Color.WHITE);  // Set the text color to white for visibility
        updateButton.setFont(new Font("Arial", Font.BOLD, 24));  // Set the font to Arial, bold, size 24

        // Initialize and style the Delete button
        deleteButton = new JButton("Delete");  // Create a button labeled "Delete"
        deleteButton.setBackground(Color.GRAY);  // Set the button's background color to gray
        deleteButton.setForeground(Color.WHITE);  // Set the text color to white for visibility
        deleteButton.setFont(new Font("Arial", Font.BOLD, 24));  // Set the font to Arial, bold, size 24
    }

    // Method to add components to the frame
    private void addComponents() {
        // Add initialized components to the background label
        background.add(usernameLabel);
        background.add(usernameField);
        background.add(status);  // Add the status label
        background.add(pendingButton);
        background.add(completedButton);
        background.add(addButton);
        background.add(updateButton);
        background.add(deleteButton);

        // Position components within the frame
        positionComponents();  // Call method to set component positions
    }

    // Method to position components within the frame
    private void positionComponents() {
        // Get the width and height of the frame
        int frameWidth = getWidth();  // Get the frame's width
        int frameHeight = getHeight();  // Get the frame's height

        // Define sizes and gaps for components
        int statusWidth = 400;  // Width of the status label
        int statusHeight = 60;  // Height of the status label
        int buttonWidth = 200;  // Width of each button
        int buttonHeight = 60;  // Height of each button
        int textFieldWidth = 400;  // Width of the username text field
        int textFieldHeight = 60;  // Height of the username text field
        int labelWidth = 150;  // Width of the username label
        int gap = 30;  // Space between components

        // Position the Username label and text field
        usernameLabel.setBounds((frameWidth - labelWidth - textFieldWidth - gap) / 2, 100, labelWidth, textFieldHeight);  // Center the username label horizontally
        usernameField.setBounds(usernameLabel.getX() + labelWidth + gap, 100, textFieldWidth, textFieldHeight);  // Position the text field next to the username label

        // Position the Status label
        status.setBounds((frameWidth - statusWidth) / 2, usernameField.getY() + textFieldHeight + gap, statusWidth, statusHeight);  // Center the status label below the username field

        // Position the Pending and Completed buttons horizontally
        pendingButton.setBounds((frameWidth - buttonWidth * 2 - gap) / 2, status.getY() + statusHeight + gap, buttonWidth, buttonHeight);  // Center the Pending button
        completedButton.setBounds(pendingButton.getX() + buttonWidth + gap, status.getY() + statusHeight + gap, buttonWidth, buttonHeight);  // Position the Completed button to the right of the Pending button

        // Position the Add, Update, and Delete buttons in a row below the task status buttons
        addButton.setBounds((frameWidth - buttonWidth * 3 - gap * 2) / 2, pendingButton.getY() + buttonHeight + gap, buttonWidth, buttonHeight);  // Center the Add button
        updateButton.setBounds(addButton.getX() + buttonWidth + gap, pendingButton.getY() + buttonHeight + gap, buttonWidth, buttonHeight);  // Position the Update button to the right of the Add button
        deleteButton.setBounds(updateButton.getX() + buttonWidth + gap, pendingButton.getY() + buttonHeight + gap, buttonWidth, buttonHeight);  // Position the Delete button to the right of the Update button
    }

    // Method to add action listeners to the buttons (not implemented here but can be added)
    private void addActionListeners() {
        // Add ActionListener to handle button clicks (this method is a placeholder for adding actual listeners)
        pendingButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Handle Pending button click
            }
        });

        completedButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Handle Completed button click
            }
        });

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Handle Add button click
            }
        });

        updateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Handle Update button click
            }
        });

        deleteButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Handle Delete button click
            }
        });
    }

    // Main method to run the application
    public static void main(String[] args) {
        new Myframe();  // Create an instance of Myframe to display the GUI
    }
}