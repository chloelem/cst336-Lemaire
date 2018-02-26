<form>
    <h1> Tennis </h1>
    Name: <input type="text" id="fullName" size="25" />   <br />
    <h2> What is your favorite player ?</h2>
    Players <br>
    <select id="players">
      <option value="ND">Rafael Nadal</option>
      <option value="RG">Roger Federer</option>
      <option value="AM">Andy Murray</option>
      <option value="ND">Novak Djokovic</option>
      <option value="VW">Venus Williams</option>
      <option value="JW">Jo-Wilfried Tsonga</option>
      <option value="SW">Stan Wawrinka</option>
      <option value="GM">Gael Monfils</option>
      <option value="CW">Caroline Wozniacki</option>
      <option value="SH">Simona Halep</option>
      <option value="MS">Maria Sharaopova</option>
      <option value="SW">Serena Williams</option>
      <option value="DG">David Goffin</option>
      
  </select>    <br /><br />
    Prefered Grand slam :  <br>
    <input type="radio"  id="item1"  name="slamChoices"  value="Roland Garros" >
         <label for="item1">Roland Garros</label> <br>
    <input type="radio"  id="item2"  name="slamChoices" value="Wimbledon">
          <label for="item2">Wimbledon</label> <br>
          <input type="radio"  id="item3"  name="slamChoices"  value="US open" >
         <label for="item3">US open</label> <br><br>
         
    Brand of racket <br>
    <input type="checkbox" id="babolat"  name="brands" value="babolat">
            <label for="babolat"> Babolat </label> <br>
     <input type="checkbox" id="technifibre" name="brands" value="technifibre">
            <label for="technifibre"> Technifibre </label>
    <br/><br/>
    Experience:    <textarea id="experience" cols="30" rows="3"></textarea><br/><br />
    <input type="button" value="Submit" onclick="displayData()"/>
  </form>
 
