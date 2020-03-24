import java.io.File;
import java.util.Date;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class principal {

    public principal(){}

    private static void mandaComando(String nome1, String nome2)
    {
        String[] command = new String[]{"ffmpeg", "-i", nome1, nome2};
        System.out.println(command[0] + " " + command[1] + " " + command[2] + " " + command[3]);
        try {
            Process p = new ProcessBuilder().command(command).inheritIO().start();
            int exitCode = p.waitFor();
            System.out.println("exitCode = " + exitCode);
        } catch (IOException e) {
            e.printStackTrace();
        } catch (InterruptedException e)
        {
            e.printStackTrace();
        }
    }
    public static void main(String[] args) {
        Date dataDeHoje = new Date();
        File pasta = new File(System.getProperty("user.home") + "\\Documents\\League of Legends\\Highlights");
        for (File arquivo : (pasta.listFiles())) {
            Date dataLastModified = new Date( arquivo.lastModified() );
            if(arquivo.length() > 3000
            && dataLastModified.getDay() == dataDeHoje.getDay()
            && dataLastModified.getMonth() == dataDeHoje.getMonth()
            && dataLastModified.getHours() > (dataDeHoje.getHours() - 1) )
            {
                mandaComando((arquivo.getAbsoluteFile().toString().replaceFirst("[.][^.]+$", "") + ".webm"), (arquivo.getAbsolutePath().toString().replaceFirst("[.][^.]+$", "") + ".mp4"));
            }
        }

        System.exit(0);
    }
}

