package linkedlist.singly;

public class SinglyLinkedList {

    public Node head=null;
    public Node tail=null;

    //add node
    public void addNode(int data){
        Node newNode = new Node(data);

        //checks if the list is empty
        if(head==null){
            //if list is empty, both head and tail point to new node
            head=newNode;
            tail=newNode;
        }else{
            tail.next=newNode;
            tail=newNode;
        }

    }

    //display the list
    public void display(){
        Node current = head;
        if(head==null){
            System.out.println("List is empty");
            return;
        }
        System.out.println("Nodes of singly linked list:: ");
        while (current!=null){
            System.out.print(current.data + "->");
            current=current.next;
        }

        System.out.println("NULL");

    }

    public static void main(String[] args) {
        SinglyLinkedList sList = new SinglyLinkedList();

        //Add nodes to the list
        sList.addNode(1);
        sList.addNode(2);
        sList.addNode(3);
        sList.addNode(4);

        //Displays the nodes present in the list
        sList.display();
    }

}
