import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class RecordManagerGUI extends JFrame implements ActionListener {
    private ArrayList<String> records;
    private JTextField recordTextField;
    private JTextArea displayArea;

    public RecordManagerGUI() {
        records = new ArrayList<>();
        setTitle("Record Manager");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // Components
        JPanel inputPanel = new JPanel();
        inputPanel.setLayout(new FlowLayout());

        JLabel recordLabel = new JLabel("Record:");
        recordTextField = new JTextField(20);
        JButton insertButton = new JButton("Insert");
        JButton updateButton = new JButton("Update");
        JButton deleteButton = new JButton("Delete");

        insertButton.addActionListener(this);
        updateButton.addActionListener(this);
        deleteButton.addActionListener(this);

        inputPanel.add(recordLabel);
        inputPanel.add(recordTextField);
        inputPanel.add(insertButton);
        inputPanel.add(updateButton);
        inputPanel.add(deleteButton);

        displayArea = new JTextArea(10, 30);
        displayArea.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(displayArea);

        Container contentPane = getContentPane();
        contentPane.setLayout(new BorderLayout());
        contentPane.add(inputPanel, BorderLayout.NORTH);
        contentPane.add(scrollPane, BorderLayout.CENTER);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String record = recordTextField.getText().trim();
        if (record.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Please enter a record.");
            return;
        }

        String action = e.getActionCommand();
        switch (action) {
            case "Insert":
                records.add(record);
                displayRecords();
                break;
            case "Update":
                String updatedRecord = JOptionPane.showInputDialog(this, "Enter updated record:");
                if (updatedRecord != null && !updatedRecord.isEmpty()) {
                    int index = records.indexOf(record);
                    if (index != -1) {
                        records.set(index, updatedRecord);
                        displayRecords();
                    } else {
                        JOptionPane.showMessageDialog(this, "Record not found.");
                    }
                }
                break;
            case "Delete":
                int option = JOptionPane.showConfirmDialog(this, "Are you sure you want to delete this record?");
                if (option == JOptionPane.YES_OPTION) {
                    records.remove(record);
                    displayRecords();
                }
                break;
            default:
                break;
        }

        recordTextField.setText("");
    }

    private void displayRecords() {
        displayArea.setText("");
        for (String record : records) {
            displayArea.append(record + "\n");
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            RecordManagerGUI gui = new RecordManagerGUI();
            gui.setVisible(true);
        });
    }
}
