import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.Label;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;

public class kmtomile extends Application{

    @Override
    public void start(Stage primaryStage) throws Exception{
        primaryStage.setTitle("Kilometer to Mile converter Application");
        Button btn = new Button("Execute");
        TextField t = new TextField("Enter distance in km");
        Label l = new Label("Distance:  ");

        GridPane root = new GridPane();
        root.add(l,0,0);
        root.add(t,1,0);
        root.add(btn,1,2);
        root.setAlignment(Pos.CENTER);
        btn.setAlignment(Pos.CENTER);

        Scene scene = new Scene(root,400,400);
        primaryStage.setScene(scene);
        primaryStage.show();


        btn.setOnAction(new EventHandler<ActionEvent>(){
            @Override
            public void handle(ActionEvent event){
                String a = t.getText();
                double i = Double.parseDouble(a);
                double d = i*1.602;
                Alert an = new Alert(AlertType.NONE);
                // set alert type
                an.setAlertType(AlertType.INFORMATION);
                String ans= Double.toString(d);
                an.setContentText(ans);
                an.show();
            }
        });
    }

    public static void main(String[] args) {
        launch(args);

    }

}