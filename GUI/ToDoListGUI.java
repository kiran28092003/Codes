import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class ToDoListGUI implements ActionListener {

    private JFrame frame;
    private JTextField taskField;
    private JList<String> taskList;
    private DefaultListModel<String> taskListModel;
    private JButton addButton, updateButton, deleteButton, submitButton, pendingButton, completedButton;

    private ArrayList<String> tasks;

    public static void main(String[] args) {
        EventQueue.invokeLater(() -> {
            try {
                ToDoListGUI window = new ToDoListGUI();
                window.frame.setVisible(true);
            } catch (Exception e) {
                e.printStackTrace();
            }
        });
    }

    public ToDoListGUI() {
        tasks = new ArrayList<>();
        initialize();
    }

    private void initialize() {
        frame = new JFrame();
        frame.setTitle("To-Do List");
        frame.setBounds(100, 100, 600, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().setLayout(new BorderLayout());

        // Create the panel for task input and buttons
        JPanel panel = new JPanel();
        frame.getContentPane().add(panel, BorderLayout.NORTH);
        panel.setLayout(new GridLayout(3, 1, 10, 10));

        // Task input field
        taskField = new JTextField();
        panel.add(taskField);

        // Create buttons
        JPanel buttonPanel = new JPanel();
        panel.add(buttonPanel);
        buttonPanel.setLayout(new GridLayout(1, 6, 10, 10));

        addButton = new JButton("Add");
        addButton.addActionListener(this);
        buttonPanel.add(addButton);

        updateButton = new JButton("Update");
        updateButton.addActionListener(this);
        buttonPanel.add(updateButton);

        deleteButton = new JButton("Delete");
        deleteButton.addActionListener(this);
        buttonPanel.add(deleteButton);

        submitButton = new JButton("Submit");
        submitButton.addActionListener(this);
        buttonPanel.add(submitButton);

        pendingButton = new JButton("Pending");
        pendingButton.addActionListener(this);
        buttonPanel.add(pendingButton);

        completedButton = new JButton("Completed");
        completedButton.addActionListener(this);
        buttonPanel.add(completedButton);

        // Create list model and list
        taskListModel = new DefaultListModel<>();
        taskList = new JList<>(taskListModel);
        JScrollPane scrollPane = new JScrollPane(taskList);
        frame.getContentPane().add(scrollPane, BorderLayout.CENTER);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String command = e.getActionCommand();
        String task = taskField.getText().trim();

        if (command.equals("Add")) {
            if (!task.isEmpty()) {
                taskListModel.addElement("Pending: " + task);
                taskField.setText("");
            }
        } else if (command.equals("Update")) {
            int selectedIndex = taskList.getSelectedIndex();
            if (selectedIndex != -1 && !task.isEmpty()) {
                taskListModel.set(selectedIndex, "Pending: " + task);
                taskField.setText("");
            }
        } else if (command.equals("Delete")) {
            int selectedIndex = taskList.getSelectedIndex();
            if (selectedIndex != -1) {
                taskListModel.remove(selectedIndex);
                taskField.setText("");
            }
        } else if (command.equals("Submit")) {
            // Implement any submit logic here, e.g., save to database
            JOptionPane.showMessageDialog(frame, "Tasks submitted!");
        } else if (command.equals("Pending")) {
            updateStatus("Pending");
        } else if (command.equals("Completed")) {
            updateStatus("Completed");
        }
    }

    private void updateStatus(String status) {
        int selectedIndex = taskList.getSelectedIndex();
        if (selectedIndex != -1) {
            String task = taskListModel.get(selectedIndex);
            String updatedTask = task.replace("Pending: ", "").replace("Completed: ", "");
            taskListModel.set(selectedIndex, status + ": " + updatedTask);
        }
    }
}
