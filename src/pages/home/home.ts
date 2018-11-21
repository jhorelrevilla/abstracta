import { Component } from '@angular/core';
import { NavController } from 'ionic-angular';

@Component({
  selector: 'page-home',
  templateUrl: 'home.html'
})
export class HomePage {
  answer: string = "";
  message: string = "";
  
  keepConversation = [];
  greetAnswers = [];
  
  constructor(public navCtrl: NavController) {
	  this.initGreetAnswers();
	  this.initKeepConversation();
  }
  
  public initKeepConversation(){
	  this.keepConversation.push("Si me parece bien");
	  this.keepConversation.push("Aja!");
	  this.keepConversation.push("De verdad?");
	  this.keepConversation.push("Si me parece bien");
  }
  
  public initGreetAnswers(){
	  this.greetAnswers.push("habla!");
	  this.greetAnswers.push("bien y tu?");
	  this.greetAnswers.push("hola");
  }
 
  public sendMessage()
  {
	if(this.message.indexOf("hola") != -1)
		this.answer = this.greetAnswers[Math.floor(Math.random() * 5)];
	else 
		this.answer = this.keepConversation[Math.floor(Math.random() * 5)];
  }
  

}
