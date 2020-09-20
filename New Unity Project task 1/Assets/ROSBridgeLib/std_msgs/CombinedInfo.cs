using System.Collections;
using System.Text;
using SimpleJSON;

/* 
 * @brief ROSBridgeLib
 * @author Michael Jenkin, Robert Codd-Downey, Andrew Speers and Miquel Massot Campos
 */

namespace ROSBridgeLib {
	namespace std_msgs {
        public class CombinedInfo : ROSBridgeMsg {
        private int[] linear_acceleration  ;
        
       
         public CombinedInfo(JSONNode msg) {
               
               linear_acceleration = new int[msg["data"].Count];
				for (int i = 0; i < linear_acceleration.Length; i++) {
                    linear_acceleration[i] = int.Parse(msg["data"][i]);
                }
            } 
           public static string GetMessageType() {
                return "std_msgs/CombinedInfo";
            }
           
           public CombinedInfo( int[] data) {
                
                linear_acceleration = data;
            }
            public int[] GetData() {
                return linear_acceleration;
            }
           
         }
      }
}
