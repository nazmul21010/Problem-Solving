import java.util.Locale;

public class PhoneNumberInfo {
    public static void main(String[] args) {

        String phoneNumber = "+8801714241483";

        PhoneNumberUtil phoneNumberUtil = PhoneNumberUtil.getInstance();

        try {

            Phonenumber.PhoneNumber parsedNumber = phoneNumberUtil.parse(phoneNumber, null);

            PhoneNumberOfflineGeocoder geocoder = PhoneNumberOfflineGeocoder.getInstance();
            String location = geocoder.getDescriptionForNumber(parsedNumber, Locale.ENGLISH);
            System.out.println("Location: " + location);

            PhoneNumberToCarrierMapper carrierMapper = PhoneNumberToCarrierMapper.getInstance();
            String carrierName = carrierMapper.getNameForNumber(parsedNumber, Locale.ENGLISH);
            System.out.println("Carrier: " + carrierName);

        } catch (NumberParseException e) {
            e.printStackTrace();
            System.out.println("NumberParseException was thrown: " + e.toString());
        }
    }
}