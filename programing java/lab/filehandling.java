import java.io.File;

class filemethod1 {
    public static void main(String[] args) throws Exception {
        File F = new File("C:\\Users\\chait\\Desktop\\Prog\\CHAITANYA-2002\\programing java\\lab", "abc.txt");
        F.createNewFile();
        System.out.println("Filename=" + F.getName());
        System.out.println("Filepath=" + F.getPath());

        File F1 = new File("C:\\Users\\chait\\Desktop\\Prog\\CHAITANYA-2002\\programing java\\lab\\xyz.txt");
        F.renameTo(F1);

        File F2 = new File("C:\\Users\\chait\\Desktop\\Prog\\CHAITANYA-2002\\programing java\\lab\\CK");
        if (F2.mkdir()) {
            System.out.println("directory created");
        } else
            System.out.println("directory not created");

    }

}