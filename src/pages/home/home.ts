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
  
  conversaciones: Array<any> = [
						{quien: 'Pedrito', mensaje: 'Hola'},
						{quien: 'Juanita', mensaje: 'Hey que tal!'},
						{quien: 'Pedrito', mensaje: 'Bien y tu?'},
						{quien: 'Juanita', mensaje: 'Ya me tengo que ir chau'}];
  constructor(public navCtrl: NavController) {
	  this.initGreetAnswers();
	  this.initKeepConversation();
  }
  
  public initKeepConversation(){
	  this.keepConversation.push("hola");
  }
  public initGreetAnswers(){
	  this.greetAnswers.push("habla!");
  }
 
  public sendMessage()
  {
	this.conversaciones.push({quien: 'Pedrito', mensaje: this.message});
  }
  

}
